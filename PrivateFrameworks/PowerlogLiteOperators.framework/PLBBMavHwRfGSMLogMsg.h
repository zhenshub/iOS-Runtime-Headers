/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface PLBBMavHwRfGSMLogMsg : PLBasebandMessage {
    NSMutableDictionary *_commonInfo;
    NSArray *_connState;
    NSString *_error;
    NSMutableArray *_groupArrEntries;
    NSString *_groupEntryKey;
    NSString *_groupID;
    unsigned char _inited;
    NSMutableDictionary *_kvPairs;
    NSNumber *_logDuration;
}

@property(retain) NSMutableDictionary * commonInfo;
@property(retain) NSArray * connState;
@property(retain) NSString * error;
@property(retain) NSMutableArray * groupArrEntries;
@property(retain) NSString * groupEntryKey;
@property(retain) NSString * groupID;
@property unsigned char inited;
@property(retain) NSMutableDictionary * kvPairs;
@property(retain) NSNumber * logDuration;

+ (id)entryEventBackwardDefinitionBBMavHwRfGSM;

- (void).cxx_destruct;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (id)commonInfo;
- (id)connState;
- (id)error;
- (id)groupArrEntries;
- (id)groupEntryKey;
- (id)groupID;
- (id)init;
- (unsigned char)inited;
- (id)kvPairs;
- (id)logDuration;
- (id)logEventBackwardBBMavHwRfGSM;
- (void)logEventBackwardGroupEntriesMav10BBHwRfWcdma;
- (void)populateEntry:(id)arg1;
- (void)refreshRequest;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (void)setCommonInfo:(id)arg1;
- (void)setConnState:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroupArrEntries:(id)arg1;
- (void)setGroupEntryKey:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)setInited:(unsigned char)arg1;
- (void)setKvPairs:(id)arg1;
- (void)setLogDuration:(id)arg1;

@end