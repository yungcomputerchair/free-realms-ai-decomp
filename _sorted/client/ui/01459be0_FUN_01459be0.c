// addr: 0x01459be0
// name: FUN_01459be0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01459be0(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an 0x88-byte object via FUN_01459af0 using a field from the source
                       object, then passes the created object to source vfunc +0x48. Class identity
                       is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c71b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x88);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = CWGameCommand_SetupGame_ctor(param_1[2]);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(uVar3,uVar1);
  ExceptionList = pvVar2;
  return uVar3;
}

