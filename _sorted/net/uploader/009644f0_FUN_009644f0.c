// addr: 0x009644f0
// name: FUN_009644f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_009644f0(void * object) */

void * __fastcall FUN_009644f0(void *object)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Wrapper that invokes FUN_00962dd0 under an exception frame and returns its
                       input. No class evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01596158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00962dd0(object);
  ExceptionList = local_c;
  return object;
}

