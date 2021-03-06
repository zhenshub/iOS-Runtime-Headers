/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.Location : NSObject <NSSecureCoding> {
    void address;
    void coordinate;
    void mapItemHandle;
    void radius;
    void title;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) BOOL hasKnownSpatialData;
@property (nonatomic, copy) NSData *mapItemHandle;
@property (nonatomic, readonly) NSString *shallowDescription;
@property (nonatomic, copy) NSString *title;

+ (BOOL)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)address;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasKnownSpatialData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)mapItemHandle;
- (void)setAddress:(id)arg1;
- (void)setMapItemHandle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shallowDescription;
- (id)title;

@end
