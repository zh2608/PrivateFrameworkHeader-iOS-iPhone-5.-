/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSListItemsController : PSListController  {
    int _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
}


- (BOOL)isRestrictionList;
- (void)setIsRestrictionList:(BOOL)arg1;
- (void)scrollToSelectedCell;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)setRowToSelect;
- (void)listItemSelected:(id)arg1;
- (void)_addStaticText:(id)arg1;
- (id)itemsFromParent;
- (id)itemsFromDataSource;
- (void)prepareSpecifiersMetadata;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)specifiers;
- (void)didLock;

@end
