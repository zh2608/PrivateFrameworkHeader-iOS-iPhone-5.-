/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMCopyright : PBCodable  {
    NSMutableArray *_mapDataCopyrights;
    NSMutableArray *_imageryCopyrights;
    BOOL _hasCopyrightYear;
    int _copyrightYear;
}

@property(retain) NSMutableArray * mapDataCopyrights;
@property(retain) NSMutableArray * imageryCopyrights;
@property BOOL hasCopyrightYear;
@property int copyrightYear;


- (BOOL)readFrom:(id)arg1;
- (int)copyrightYear;
- (void)setHasCopyrightYear:(BOOL)arg1;
- (BOOL)hasCopyrightYear;
- (id)imageryCopyrights;
- (id)mapDataCopyrights;
- (id)imageryCopyrightAtIndex:(unsigned int)arg1;
- (unsigned int)imageryCopyrightsCount;
- (id)mapDataCopyrightAtIndex:(unsigned int)arg1;
- (unsigned int)mapDataCopyrightsCount;
- (void)setCopyrightYear:(int)arg1;
- (void)addImageryCopyright:(id)arg1;
- (void)addMapDataCopyright:(id)arg1;
- (void)setImageryCopyrights:(id)arg1;
- (void)setMapDataCopyrights:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
