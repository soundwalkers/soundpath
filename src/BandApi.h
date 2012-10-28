//
//  BandApi.h
//  SoundPath
//
//  Created by Bogdan Florescu on 10/28/12.
//
//

#import <Foundation/Foundation.h>

/*
 * Delegate.
 */
@protocol APIDelegate <NSObject>
- (void)loadBand:(NSString*) band_id;
@end

@interface BandApi : NSObject<NSFetchedResultsControllerDelegate>
{
    // delegate
	__weak id<APIDelegate> delegate;
    
    // queue
    NSOperationQueue *queue;

    // core data
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
}

@property (nonatomic, weak) id <APIDelegate> delegate;

- (void)fetchRecords;
- (void)getBand:(NSString*) band_id;

@end
