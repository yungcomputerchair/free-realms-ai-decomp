// addr: 0x0079a880
// name: FUN_0079a880
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0079a880(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
                    /* Asset-load callback that accepts only the initial/zero state, casts a generic
                       Asset to ActorGroupDefinitionAsset, addrefs it, stores it at this+0x1c, and
                       runs a post-load helper. Owning loader class is not identified. */
  if (param_3 == 0) {
    iVar1 = FUN_00d8d382(param_2,0,&AssetManagement::Asset::RTTI_Type_Descriptor,
                         &ActorGroupDefinitionAsset::RTTI_Type_Descriptor,0);
    *(int *)(param_1 + 0x1c) = iVar1;
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
    FUN_00799a30(*(undefined4 *)(param_1 + 0x1c));
    return 1;
  }
  return 0;
}

