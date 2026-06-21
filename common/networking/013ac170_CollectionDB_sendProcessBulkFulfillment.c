// addr: 0x013ac170
// name: CollectionDB_sendProcessBulkFulfillment
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_sendProcessBulkFulfillment(void * this, void * property, int
   maxCount_, bool includeTradable_) */

void __thiscall
CollectionDB_sendProcessBulkFulfillment
          (void *this,void *property,int maxCount_,bool includeTradable_)

{
  bool bVar1;
  uint uVar2;
  undefined4 extraout_EAX;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *command;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds a list of collection instance IDs, constructs
                       SynchronizationCommand_ProcessBulkFulfillment, and queues it through
                       NetworkService. Evidence: resolves collection data, filters instance vectors,
                       constructs ProcessBulkFulfillment command, and calls
                       NetworkService_queueCommand. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016868b0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  uVar6 = 0;
  if (*(int *)((int)this + 0xa0) == 0) {
    CollectionDB_initSingleton();
    CollectionDB_resolveDefaultCollection();
    *(undefined4 *)((int)this + 0xa0) = extraout_EAX;
  }
  pvVar3 = PropertyContainer_findChild(*(void **)((int)this + 0xa0));
  if (pvVar3 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
  local_4 = 0;
  if (includeTradable_) {
    iVar4 = PropertyVector16_getStorage((int)pvVar3);
    uVar2 = FUN_013d3b30();
    if ((uint)maxCount_ < uVar2) {
      _includeTradable_ = maxCount_;
    }
    else {
      _includeTradable_ = FUN_013d3b30();
    }
    if ((_includeTradable_ != 0) && (iVar5 = FUN_012c1630(), iVar5 != 0)) {
      iVar5 = 0;
      do {
        if ((*(int *)(iVar4 + 4) == 0) ||
           ((uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 4) <= uVar6)) {
          FUN_00d83c2d();
        }
        bVar1 = InstanceIDVector_contains(pvVar3,(void *)(*(int *)(iVar4 + 4) + iVar5));
        if (!bVar1) {
          if ((*(int *)(iVar4 + 4) == 0) ||
             ((uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 4) <= uVar6)) {
            FUN_00d83c2d();
          }
          FUN_012c3e50(*(int *)(iVar4 + 4) + iVar5);
          _includeTradable_ = _includeTradable_ + -1;
          if (_includeTradable_ == 0) break;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x10;
        uVar2 = FUN_012c1630();
      } while (uVar6 < uVar2);
    }
    goto LAB_013ac301;
  }
  iVar5 = CollectionEntry_getNonTradableInstancesVector(uVar2);
  iVar4 = *(int *)(iVar5 + 4);
  if (iVar4 == 0) {
LAB_013ac2ba:
    maxCount_ = 0;
  }
  else if ((uint)(*(int *)(iVar5 + 8) - iVar4 >> 4) <= (uint)maxCount_) {
    if (iVar4 == 0) goto LAB_013ac2ba;
    maxCount_ = *(int *)(iVar5 + 8) - iVar4 >> 4;
  }
  if (maxCount_ != 0) {
    iVar4 = 0;
    do {
      if ((*(int *)(iVar5 + 4) == 0) ||
         ((uint)(*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 4) <= uVar6)) {
        FUN_00d83c2d();
      }
      FUN_012c3e50(*(int *)(iVar5 + 4) + iVar4);
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar6 < (uint)maxCount_);
  }
LAB_013ac301:
  SynchronizationCommand_ProcessBulkFulfillment_ctor(local_20);
  local_4._0_1_ = 1;
  CollectionElementVector_dtorThunk();
  command = local_20;
  pvVar3 = NetworkService_getSingleton();
  NetworkService_queueCommand(pvVar3,command);
  local_4 = (uint)local_4._1_3_ << 8;
  SynchronizationCommand_ProcessBulkFulfillment_dtor(local_20);
  local_4 = 0xffffffff;
  FUN_012c2de0();
  ExceptionList = local_c;
  return;
}

