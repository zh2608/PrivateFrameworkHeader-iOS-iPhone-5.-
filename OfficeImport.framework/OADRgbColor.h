/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRgbColor : OADColor  {
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
+ (id)rgbColorWithWhite:(float)arg1;
+ (id)rgbColorWithWhiteByte:(float)arg1;
+ (id)rgbColorWithNSColor:(id)arg1;
+ (id)white;
+ (id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)black;

- (id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2;
- (id)initWithWhite:(float)arg1;
- (id)initWithWhiteByte:(float)arg1;
- (unsigned char)redByte;
- (unsigned char)greenByte;
- (unsigned char)blueByte;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
- (float)blue;
- (float)green;
- (float)red;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
