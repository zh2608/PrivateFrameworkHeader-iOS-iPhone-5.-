/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class PBDataWriter, PBStreamWriter;

@interface PBMessageStreamWriter : NSObject  {
    PBStreamWriter *_writer;
    PBDataWriter *_messageWriter;
}

@property(retain) PBStreamWriter * writer;
@property(retain) PBDataWriter * messageWriter;


- (id)initWithOutputStream:(id)arg1;
- (id)writer;
- (void)setWriter:(id)arg1;
- (BOOL)writeMessage:(id)arg1;
- (id)messageWriter;
- (void)setMessageWriter:(id)arg1;
- (void)dealloc;

@end
