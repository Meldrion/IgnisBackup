uniform sampler2D texture;

varying vec4 v_color;
varying vec2 v_texCoord0;

void main()
{
    // lookup the pixel in the texture
    vec4 pixel = texture2D(texture, gl_TexCoord[0].xy);

    pixel.r = pixel.r;
    pixel.g = pixel.r; 
    pixel.b = pixel.r;
    pixel.a = pixel.a;

    // multiply it by the color
    gl_FragColor = gl_Color * pixel;
}
