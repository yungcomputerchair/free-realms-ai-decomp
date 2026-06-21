// addr: 0x008721c0
// name: FUN_008721c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_008721c0(void * value) */

void * __fastcall FUN_008721c0(void *value)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-frame wrapper that calls FUN_00871e20 and returns its input value
                       unchanged. Specific purpose is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015750f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00871e20(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return value;
}

