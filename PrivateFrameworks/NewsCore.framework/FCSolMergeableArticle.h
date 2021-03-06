/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolMergeableArticle : NSObject {
    FCSolArticleID * _articleId;
    int  _degree;
    NSSet * _tagIds;
}

@property (nonatomic, retain) FCSolArticleID *articleId;
@property (nonatomic) int degree;
@property (nonatomic, retain) NSSet *tagIds;

- (void).cxx_destruct;
- (id)articleId;
- (int)degree;
- (id)initWithArticleId:(id)arg1 tagIds:(id)arg2 degree:(int)arg3;
- (void)setArticleId:(id)arg1;
- (void)setDegree:(int)arg1;
- (void)setTagIds:(id)arg1;
- (id)tagIds;

@end
