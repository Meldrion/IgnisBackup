#!/usr/bin/env python


# Written by Steines Fabien 
# 19-01-2016 

def scanFileAndConvert(inputFilePath):
	
	print("Scanning file: " + inputFilePath)
	
	# Define the empty lists
	uiFiles = []
	headerFiles = []
	sourceFiles = []
	
	# Open the source file
	inputFile = open(inputFilePath)
	fileContent = inputFile.readlines() 
	
	# First step: Excract the important Data from  the vcxproj source file 	
	for line in fileContent:
		
		# Remove the LineBreaks and Whitespaces from the line	
		lineContent = line.rstrip()
		
		# Conditions for the value string
		condition1 = ".ui" in lineContent or  ".h" in lineContent or ".cpp" in lineContent
		condition2 = "Include=" in lineContent  and not("GeneratedFiles" in lineContent)
		
		# Only proceed if the file applies to both conditions 
		if condition1 and condition2: 
			
			# Find the Index of the Value Data
			startIndex = lineContent.index("\"")
			endIndex = lineContent.rindex("\"")

			value = lineContent[startIndex + 1: endIndex ]
			if ".h" in value:
				headerFiles.append(value)
			else:
				if ".cpp" in value:
					sourceFiles.append(value)
				else: 
					uiFiles.append(value)

	# Close the Input File, it is no longer needed at this moment		
	inputFile.close()	

	# Sort the Header Files by Alphabethical Order
	headerFiles = sorted(headerFiles)
	# Sort the Source Files by Alphabethical Order
	sourceFiles = sorted(sourceFiles)
	# Sort the Header Files by Alphabethical Order
	uiFiles = sorted(uiFiles)

	# Outputting Data
	for filename in headerFiles: 
		print ("Header: " + filename)
	for filename in sourceFiles: 
		print("Source: " + filename)
	for filename in  uiFiles: 
		print("UI: " + filename)
	
	# Begin the Data Transformation part
	print ("\n")
	subStrings = inputFilePath.split(".")
	outputFileName = subStrings[0] + ".pro"
	
	print ("Writing Data to outputfile: " + outputFileName)	
	
	print ("\n")
	print("Done !")

scanFileAndConvert("Ignis.vcxproj")

