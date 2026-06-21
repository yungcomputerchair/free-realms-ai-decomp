// addr: 0x006f9bb0
// name: FUN_006f9bb0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_006f9bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
                    /* Maintains a linked list of key/value string groups: finds or creates a group
                       by name, then adds/replaces a string value node under that group. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0154c601;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  puVar3 = (undefined1 *)*param_1;
  *(undefined1 *)(param_1 + 0x83) = 1;
  do {
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = Mem_Alloc(0x54);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar3 + 0x40) = 0;
        *(undefined4 *)(puVar3 + 0x44) = 0;
        *(undefined4 *)(puVar3 + 0x48) = 0;
        *(undefined4 *)(puVar3 + 0x4c) = 0;
        *(undefined4 *)(puVar3 + 0x50) = 0;
        *puVar3 = 0;
      }
      local_4 = 0xffffffff;
      FUN_006fb400(puVar3,param_2,0x40);
      *(undefined4 *)(puVar3 + 0x40) = param_1[1];
      if (param_1[1] == 0) {
        *param_1 = puVar3;
      }
      else {
        *(undefined1 **)(param_1[1] + 0x44) = puVar3;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = puVar3;
      puVar5 = Mem_Alloc(0x50);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x48) = 0;
        *(undefined4 *)(puVar5 + 0x4c) = 0;
        *puVar5 = 0;
        puVar5[0x44] = 0;
        *(undefined4 *)(puVar5 + 0x40) = 0;
      }
      local_4 = 0xffffffff;
      FUN_006fb400(puVar5,param_3,0x40);
      puVar5[0x44] = 1;
      uVar6 = FUN_006fb520(param_4);
      *(undefined4 *)(puVar5 + 0x40) = uVar6;
      *(undefined4 *)(puVar5 + 0x48) = *(undefined4 *)(puVar3 + 0x4c);
      if (*(int *)(puVar3 + 0x4c) == 0) {
        *(undefined1 **)(puVar3 + 0x48) = puVar5;
      }
      else {
        *(undefined1 **)(*(int *)(puVar3 + 0x4c) + 0x4c) = puVar5;
      }
      *(int *)(puVar3 + 0x50) = *(int *)(puVar3 + 0x50) + 1;
LAB_006f9d95:
      *(undefined1 **)(puVar3 + 0x4c) = puVar5;
      ExceptionList = local_c;
      return;
    }
    iVar2 = FUN_006fb490(puVar3,param_2,uVar1);
    if (iVar2 == 0) {
      for (iVar2 = *(int *)(puVar3 + 0x48); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x4c)) {
        iVar4 = FUN_006fb490(iVar2,param_3,uVar1);
        if (iVar4 == 0) {
          *(undefined1 *)(iVar2 + 0x44) = 1;
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar2 + 0x40));
        }
      }
      puVar5 = Mem_Alloc(0x50);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar5 + 0x48) = 0;
        *(undefined4 *)(puVar5 + 0x4c) = 0;
        *puVar5 = 0;
        puVar5[0x44] = 0;
        *(undefined4 *)(puVar5 + 0x40) = 0;
      }
      local_4 = 0xffffffff;
      FUN_006fb400(puVar5,param_3,0x40);
      puVar5[0x44] = 1;
      uVar6 = FUN_006fb520(param_4);
      *(undefined4 *)(puVar5 + 0x40) = uVar6;
      *(undefined4 *)(puVar5 + 0x48) = *(undefined4 *)(puVar3 + 0x4c);
      if (*(int *)(puVar3 + 0x4c) == 0) {
        *(int *)(puVar3 + 0x50) = *(int *)(puVar3 + 0x50) + 1;
        *(undefined1 **)(puVar3 + 0x48) = puVar5;
      }
      else {
        *(undefined1 **)(*(int *)(puVar3 + 0x4c) + 0x4c) = puVar5;
        *(int *)(puVar3 + 0x50) = *(int *)(puVar3 + 0x50) + 1;
      }
      goto LAB_006f9d95;
    }
    puVar3 = *(undefined1 **)(puVar3 + 0x44);
  } while( true );
}

