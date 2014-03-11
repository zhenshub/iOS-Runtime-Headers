/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray, NSMutableArray, VKAnnotationMarker, VKAnnotationMarkerLayer, VKAnnotationModel;

@interface VKAnnotationMarkerLayer : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _accumulatedCenterOffset;
    VKAnnotationMarker *_annotationMarker;
    } _centerOffset;
    float _contentScale;
    BOOL _hasMass;
    BOOL _hasScreenRect;
    VKAnnotationModel *_model;
    } _screenRect;
    int _styleType;
    NSMutableArray *_sublayers;
    VKAnnotationMarkerLayer *_superlayer;
}

@property struct CGPoint { float x1; float x2; } accumulatedCenterOffset;
@property VKAnnotationMarker * annotationMarker;
@property struct CGPoint { float x1; float x2; } centerOffset;
@property(readonly) float contentScale;
@property BOOL hasMass;
@property(readonly) BOOL hasScreenRect;
@property VKAnnotationModel * model;
@property struct { double x1; double x2; double x3; double x4; } screenRect;
@property int styleType;
@property(readonly) NSArray * sublayers;
@property VKAnnotationMarkerLayer * superlayer;

- (id).cxx_construct;
- (id)_styleAttributes;
- (void)_updateStyle;
- (int)_vectorType;
- (struct CGPoint { float x1; float x2; })accumulatedCenterOffset;
- (void)addSublayer:(id)arg1;
- (id)annotationMarker;
- (struct CGPoint { float x1; float x2; })centerOffset;
- (float)contentScale;
- (void)dealloc;
- (float)distanceFromPoint:(struct VKPoint { double x1; double x2; double x3; })arg1 canvasSize:(struct CGSize { float x1; float x2; })arg2;
- (void)drawWithContext:(id)arg1;
- (BOOL)hasMass;
- (BOOL)hasScreenRect;
- (id)init;
- (void)insertSublayer:(id)arg1 aboveSublayer:(id)arg2;
- (void)insertSublayer:(id)arg1 belowSublayer:(id)arg2;
- (void)layoutWithContext:(id)arg1;
- (id)model;
- (void)removeFromSuperlayer;
- (void)removeSublayer:(id)arg1;
- (void)runAnimation:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; })screenRect;
- (void)setAccumulatedCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAnnotationMarker:(id)arg1;
- (void)setCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHasMass:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (void)setScreenRect:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setStyleType:(int)arg1;
- (void)setSuperlayer:(id)arg1;
- (BOOL)shouldSnapToPixelsWithContext:(id)arg1;
- (int)styleType;
- (void)stylesheetDidChange;
- (id)sublayers;
- (id)superlayer;
- (void)updateWithContentScale:(float)arg1;
- (void)updateWithStyle:(id)arg1;
- (void)willLayoutWithContext:(id)arg1;

@end