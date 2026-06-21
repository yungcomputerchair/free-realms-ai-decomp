// addr: 0x006b049b
// name: BucketTableWithState_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall BucketTableWithState_ctor(void *param_1,int param_2,uint param_3)

{
                    /* Initializes a bucket-table-backed object: sets state fields/default sentinel
                       values, stores a global table descriptor, and calls BucketTable_initialize.
                        */
  FUN_006b0412();
  *(undefined4 *)((int)param_1 + 0x50) = 1;
  *(undefined4 **)((int)param_1 + 0x54) = &DAT_01bc7e28;
  *(undefined4 *)((int)param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  BucketTable_initialize(param_1,param_2,param_3);
  return param_1;
}

