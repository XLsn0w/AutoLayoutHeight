
#import <UIKit/UIKit.h>

@interface UITableViewCell (AutoLayoutHeight)

/**
 cell底视图（提高计算效率，能传则传）
 */
@property (nonatomic , strong) UIView *cellBottomView;

/**
 cell底视图数组（在不确定最下面的视图关系时，可以传入一个视图数组）
 */
@property (nonatomic , strong) NSArray<UIView *> *cellBottomViews;

/**
 cell自动计算行高

 @param tableView tableView
 @param indexPath indexPath
 @param cellTextWidth  cell内容宽度，不确定可传0
 @return cell高度
 */
+ (CGFloat)layoutCellHeight:(UITableView *)tableView
                  indexPath:(NSIndexPath *)indexPath
                      width:(CGFloat)cellTextWidth
                     offset:(CGFloat)bottomViewOffset;

/**
 cell自动计算行高优化版缓存版本

 @param tableView tableView
 @param indexPath indexPath
 @param cellTextWidth cell内容宽度，不确定可传0
 @return cell高度
 */
+ (CGFloat)layoutCellHeightWithIdentifier:(UITableView *)tableView
                                indexPath:(NSIndexPath *)indexPath
                                    width:(CGFloat)cellTextWidth
                                   offset:(CGFloat)bottomViewOffset;

@end

/*
 - (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
   return [FSTestTableViewCell layoutCellHeight:tableView indexPath:indexPath  width:0 offset:0];
 }

 */
