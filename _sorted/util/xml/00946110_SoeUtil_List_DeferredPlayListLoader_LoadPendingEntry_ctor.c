// addr: 0x00946110
// name: SoeUtil_List_DeferredPlayListLoader_LoadPendingEntry_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoeUtil_List_DeferredPlayListLoader_LoadPendingEntry_ctor(undefined4
   LoadPendingEntry_, void * this) */

void __fastcall
SoeUtil_List_DeferredPlayListLoader_LoadPendingEntry_ctor(undefined4 *LoadPendingEntry_,void *this)

{
  undefined4 *puVar1;
  
                    /* Initializes a small-storage SoeUtil::List for
                       DeferredPlayListLoader::LoadPendingEntry, setting vtables, head/tail fields,
                       and four inline nodes. Evidence: vtable names appear directly in the
                       assignments. */
  *LoadPendingEntry_ = SoeUtil::List<DeferredPlayListLoader::LoadPendingEntry,-1>::vftable;
  LoadPendingEntry_[3] = 0;
  LoadPendingEntry_[1] = 0;
  LoadPendingEntry_[2] = 0;
  *LoadPendingEntry_ = SoeUtil::List<DeferredPlayListLoader::LoadPendingEntry,4>::vftable;
  LoadPendingEntry_[4] = 0;
  LoadPendingEntry_[5] = 0;
  *(undefined1 *)(LoadPendingEntry_ + 8) = 0;
  puVar1 = (undefined4 *)((uint)(LoadPendingEntry_ + 9) & 0xfffffffc);
  *puVar1 = 0;
  puVar1[8] = puVar1;
  LoadPendingEntry_[6] = puVar1 + 8;
  puVar1[0x10] = LoadPendingEntry_[6];
  puVar1[0x18] = puVar1 + 0x10;
  LoadPendingEntry_[6] = puVar1 + 0x18;
  LoadPendingEntry_[7] = 4;
  return;
}

