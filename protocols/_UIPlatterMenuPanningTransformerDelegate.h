/* Generated by RuntimeBrowser.
 */

@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>

@required

- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didBeginPanToTransformedPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEndPanToTransformedPosition:(struct CGPoint { float x1; float x2; })arg2 offsetFromPrevious:(struct CGVector { float x1; float x2; })arg3 velocity:(struct CGVector { float x1; float x2; })arg4;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint { float x1; float x2; })arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didPanToTransformedPosition:(struct CGPoint { float x1; float x2; })arg2 offsetFromPrevious:(struct CGVector { float x1; float x2; })arg3 touchPosition:(struct CGPoint { float x1; float x2; })arg4 velocity:(struct CGVector { float x1; float x2; })arg5 didChangeAxis:(BOOL)arg6 axisLock:(int)arg7;

@end
