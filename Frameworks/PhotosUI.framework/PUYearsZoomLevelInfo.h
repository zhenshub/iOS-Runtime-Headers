/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUYearsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {
    NSMutableDictionary * _resultsForCollectionList;
    PHFetchResult * _yearsFetchResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_yearsFetchResult;
- (struct __CFString { }*)aggregateLevelKey;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (double)cellAspectRatioHint;
- (int)cellFillMode;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
- (unsigned int)dateRangeFormatterPreset;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)displayTitle;
- (void)getPhotosDataSource:(id*)arg1 displayTitleInfo:(id*)arg2 forDetailsForVisualSection:(int)arg3;
- (int)imageDeliveryMode;
- (struct CGSize { float x1; float x2; })imageRequestItemSize;
- (id)initWithZoomLevel:(unsigned int)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (int)maxRowsPerSection;
- (void)modelDidChange:(id)arg1;
- (id)momentsInCollectionList:(id)arg1;
- (id)newCollectionViewLayout;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (id)renderedStripsElementKind;
- (id)sectionHeaderElementKind;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (BOOL)supportsIncrementalChangeNotifications;
- (struct CGSize { float x1; float x2; })thumbnailImageSize;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (void)willShowMagnifiedViewController:(id)arg1;

@end
