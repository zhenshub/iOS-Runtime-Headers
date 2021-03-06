/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker {
    BOOL  _isAnotherAccountSyncingDataclass;
    BOOL  _isDataclassSyncingUsingExchangeOnly;
    BOOL  _isPerformingBatchMerge;
    BOOL  _isTetheredSyncingEnabled;
    BOOL  _localStoreHasReadOnlyCalendars;
    NSString * _tetheredSyncingSource;
}

@property (setter=setAnotherAccountIsSyncingDataclass:, nonatomic) BOOL isAnotherAccountSyncingDataclass;
@property (setter=setDataclassIsSyncingUsingExchangeOnly:, nonatomic) BOOL isDataclassSyncingUsingExchangeOnly;
@property (setter=setPerformingBatchMerge:, nonatomic) BOOL isPerformingBatchMerge;
@property (setter=setTetheredSyncingEnabled:, nonatomic) BOOL isTetheredSyncingEnabled;
@property (nonatomic) BOOL localStoreHasReadOnlyCalendars;
@property (nonatomic) NSString *tetheredSyncingSource;

- (id)descriptionForDataclassAction:(id)arg1;
- (BOOL)isAnotherAccountSyncingDataclass;
- (BOOL)isDataclassSyncingUsingExchangeOnly;
- (BOOL)isPerformingBatchMerge;
- (BOOL)isTetheredSyncingEnabled;
- (BOOL)localStoreHasReadOnlyCalendars;
- (id)message;
- (void)setAnotherAccountIsSyncingDataclass:(BOOL)arg1;
- (void)setDataclassIsSyncingUsingExchangeOnly:(BOOL)arg1;
- (void)setLocalStoreHasReadOnlyCalendars:(BOOL)arg1;
- (void)setPerformingBatchMerge:(BOOL)arg1;
- (void)setTetheredSyncingEnabled:(BOOL)arg1;
- (void)setTetheredSyncingSource:(id)arg1;
- (id)tetheredSyncingSource;
- (id)title;

@end
