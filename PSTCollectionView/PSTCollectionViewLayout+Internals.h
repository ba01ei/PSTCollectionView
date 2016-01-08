//
//  PSTCollectionViewLayout+Internals.h
//  FMPSTCollectionView
//
//  Created by Scott Talbot on 27/02/13.
//  Copyright (c) 2013 Scott Talbot. All rights reserved.
//

#import "PSTCollectionViewLayout.h"


@interface PSTCollectionViewLayout (Internals)

@property (nonatomic, copy, readonly) NSDictionary *decorationViewClassDict;
@property (nonatomic, copy, readonly) NSDictionary *decorationViewNibDict;
@property (nonatomic, copy, readonly) NSDictionary *decorationViewExternalObjectsTables;

@end


@interface PSTCollectionViewLayoutInvalidationContext (Internals)
@property (nonatomic, assign, readwrite) BOOL invalidateEverything; // set to YES when invalidation occurs because the collection view is sent -reloadData
@property (nonatomic, assign, readwrite) BOOL invalidateDataSourceCounts; // if YES, the layout should requery
@end

