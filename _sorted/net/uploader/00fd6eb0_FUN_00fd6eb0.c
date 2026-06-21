// addr: 0x00fd6eb0
// name: FUN_00fd6eb0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_00fd6eb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 4-byte object, constructs it with four arguments, and registers
                       its first field through an owner interface callback. Exact class is unknown.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162f4cb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(4);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00fd3e40(param_2,param_3,param_4,param_5);
  }
  local_4 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 8) + 0x3c))(*puVar3,0,uVar1);
  ExceptionList = unaff_ESI;
  return puVar3;
}

