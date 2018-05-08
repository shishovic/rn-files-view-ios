
#import <UIKit/UIKit.h>
#import <React/RCTComponent.h>

@interface RNFilesView : UIView {
    NSArray* _urls;
    UIColor* _previewBackgroundColor;
    NSInteger _initialIndex;
    BOOL _shouldRefreshPreview;
}

@property (nonatomic, copy) RCTBubblingEventBlock onFileChange;

@end
  
