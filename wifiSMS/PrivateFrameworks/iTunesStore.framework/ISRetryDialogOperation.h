/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */



@interface ISRetryDialogOperation : ISDialogOperation 
{
    BOOL _shouldRetry;
}

@property BOOL shouldRetry; /* unknown property attribute: V_shouldRetry */

+ (id)operationWithTitle:(id)arg1 message:(id)arg2;

- (void)handleButtonSelected:(NSInteger)arg1 withResponseDictionary:(id)arg2;
- (BOOL)shouldRetry;
- (void)setShouldRetry:(BOOL)arg1;

@end
