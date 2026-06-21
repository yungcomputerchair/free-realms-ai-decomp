// addr: 0x0109fd10
// name: AssetDeliverySystem_initializeLoaders
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AssetDeliverySystem_initializeLoaders(void * this) */

int __fastcall AssetDeliverySystem_initializeLoaders(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates direct and indirect asset-delivery loaders, stores them at offsets
                       0x618/0x61c, initializes both, and logs failures. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016456d6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x9998);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = AssetDeliveryDirect_Create
                      (*(undefined4 *)((int)this + 0x73c),*(undefined4 *)((int)this + 0x620),0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x618) = uVar3;
  pvVar2 = Mem_Alloc(0x16eb0);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = AssetDeliveryIndirect_Create
                      (*(undefined4 *)((int)this + 0x850),*(undefined4 *)((int)this + 0x964),
                       *(undefined4 *)((int)this + 0x628),*(undefined4 *)((int)this + 0xa78),0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x61c) = uVar3;
  iVar4 = (**(code **)(**(int **)((int)this + 0x618) + 4))(uVar1);
  if (iVar4 != 0) {
    Log_Info(0,
             "Initializing the asset delivery system failed to initialize the direct loader.  Error code: %d."
             ,iVar4);
    ExceptionList = local_c;
    return iVar4;
  }
  iVar4 = (**(code **)(**(int **)((int)this + 0x61c) + 4))();
  if (iVar4 != 0) {
    Log_Info(0,
             "Initializing the asset delivery system failed to initialize the indirect loader.  Error code: %d."
             ,iVar4);
  }
  ExceptionList = local_c;
  return iVar4;
}

