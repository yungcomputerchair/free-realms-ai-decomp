// addr: 0x0081cf70
// name: FUN_0081cf70
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0081cf70(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Registers a keyed object in owner hash/list tables, avoiding duplicates, then
                       invokes callbacks or attaches an existing dependent object when present. No
                       class-identifying strings or vtables name the owner or entry type. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0156a27b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = (**(code **)(*param_2 + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  puVar3 = *(undefined4 **)(param_1 + 0xbe54 + (uVar2 % 1000) * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_0081cffe:
      puVar4 = Mem_Alloc(0x14);
      puVar3 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = param_2;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar3 = puVar4;
      }
      uStack_4 = 0xffffffff;
      puVar4 = puVar3;
      uVar5 = (**(code **)(*(int *)*puVar3 + 8))(puVar3);
      FUN_0081c4a0(uVar5,puVar4);
      uVar2 = (**(code **)(*(int *)*puVar3 + 8))();
      puVar3 = *(undefined4 **)(param_1 + 0xaea4 + (uVar2 % 1000) * 4);
      while( true ) {
        if (puVar3 == (undefined4 *)0x0) {
          if (*(int *)(param_1 + 0xddbc) != 0) {
            (**(code **)**(undefined4 **)(param_1 + 0xddbc))(param_3);
          }
          ExceptionList = local_c;
          return;
        }
        if (puVar3[2] == uVar2) break;
        puVar3 = (undefined4 *)puVar3[1];
      }
      (**(code **)(*param_2 + 0xc))(*puVar3);
      ExceptionList = local_c;
      return;
    }
    if (puVar3[2] == uVar2) {
      do {
        if ((int *)*puVar3 == param_2) {
          ExceptionList = local_c;
          return;
        }
        piVar1 = puVar3 + 2;
        puVar3 = (undefined4 *)puVar3[1];
        while( true ) {
          if (puVar3 == (undefined4 *)0x0) goto LAB_0081cffe;
          if (puVar3[2] == *piVar1) break;
          puVar3 = (undefined4 *)puVar3[1];
        }
      } while( true );
    }
    puVar3 = (undefined4 *)puVar3[1];
  } while( true );
}

