// addr: 0x010113c0
// name: FUN_010113c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_010113c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a single 32-bit word initialized to zero and stores its pointer in
                       the caller-provided holder. This is generic allocation/holder setup with no
                       class evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01633cfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = Mem_Alloc(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *param_1 = puVar1;
  ExceptionList = local_c;
  return param_1;
}

