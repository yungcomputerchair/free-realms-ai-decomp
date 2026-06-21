// addr: 0x009461a0
// name: DeferredPlayListLoader_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall DeferredPlayListLoader_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeferredPlayListLoader, initializing its base, vtables,
                       pending-entry list, and a null state field. Evidence: direct
                       DeferredPlayListLoader::vftable assignments and call to the LoadPendingEntry
                       list constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01593673;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008a2530(param_2);
  local_4 = 0;
  *param_1 = DeferredPlayListLoader::vftable;
  param_1[2] = DeferredPlayListLoader::vftable;
  SoeUtil_List_DeferredPlayListLoader_LoadPendingEntry_ctor(param_1 + 4,this);
  param_1[0x2e] = 0;
  ExceptionList = local_c;
  return param_1;
}

