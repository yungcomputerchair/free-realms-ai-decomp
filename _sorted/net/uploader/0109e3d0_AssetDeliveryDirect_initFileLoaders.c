// addr: 0x0109e3d0
// name: AssetDeliveryDirect_initFileLoaders
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint AssetDeliveryDirect_initFileLoaders(void * this) */

uint __fastcall AssetDeliveryDirect_initFileLoaders(void *this)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes direct asset delivery loader state, allocates a shared manager,
                       then creates the configured number of AssetDeliveryDirect_FileLoader nodes
                       and appends them to a list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016451c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0109e360(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  pvVar1 = Mem_Alloc(0xb0);
  iVar3 = 0;
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0109e2e0();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x638) = uVar2;
  (**(code **)(*(int *)this + 8))();
  if (0 < *(int *)((int)this + 0x628)) {
    do {
      pvVar1 = Mem_Alloc(0xd0);
      local_4 = 1;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = AssetManagement_AssetDeliveryDirect_FileLoader_ctor
                           (pvVar1,*(void **)((int)this + 0x638));
      }
      local_4 = 0xffffffff;
      *(undefined4 *)((int)pvVar1 + 0xc4) = *(undefined4 *)((int)this + 0x630);
      if (*(int *)((int)this + 0x630) == 0) {
        *(void **)((int)this + 0x62c) = pvVar1;
      }
      else {
        *(void **)(*(int *)((int)this + 0x630) + 200) = pvVar1;
      }
      *(int *)((int)this + 0x634) = *(int *)((int)this + 0x634) + 1;
      *(void **)((int)this + 0x630) = pvVar1;
      FUN_00fc4bd0();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x628));
  }
  ExceptionList = local_c;
  return 0;
}

