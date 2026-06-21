// addr: 0x00ad3670
// name: FUN_00ad3670
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00ad3670(void * client) */

void __fastcall FUN_00ad3670(void *client)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes TCG asset delivery if absent, sets a flag, copies a generated id,
                       creates an AssetDeliveryIndirect for 'AssetsTcg'/'Free Realms TCG', and
                       starts it virtually. Likely TCG asset loading, not uploader. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c8e8b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  if (*(int *)((int)client + 0x40) == 0) {
    *(undefined4 *)((int)client + 0x2ba90) = 1;
    puVar2 = (undefined4 *)FUN_00702670(local_14,uVar1);
    *(undefined4 *)((int)client + 0x2bbc0) = *puVar2;
    *(undefined4 *)((int)client + 0x2bbc4) = puVar2[1];
    if (*(int *)((int)client + 0x28) == 0) {
      local_14[0] = Mem_Alloc(0x16eb0);
      local_4 = 0;
      if (local_14[0] == (void *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)AssetDeliveryIndirect_Create
                                  (&PTR_LAB_0181a2b0,"AssetsTcg",
                                   *(undefined4 *)((int)client + 0x2baa4),"Free Realms TCG",0);
      }
      local_4 = 0xffffffff;
      *(int **)((int)client + 0x28) = piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }
  ExceptionList = local_c;
  return;
}

