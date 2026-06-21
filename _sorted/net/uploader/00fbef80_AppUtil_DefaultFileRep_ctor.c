// addr: 0x00fbef80
// name: AppUtil_DefaultFileRep_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AppUtil_DefaultFileRep_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AppUtil::DefaultFileRep by invoking AppUtil_FileRep_ctor,
                       installing DefaultFileRep::vftable, and initializing its default file
                       representation state. Evidence is AppUtil::DefaultFileRep::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162d733;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  AppUtil_FileRep_ctor(param_1);
  local_4 = 0;
  *param_1 = AppUtil::DefaultFileRep::vftable;
  FUN_007039b0(uVar1);
  ExceptionList = local_c;
  return param_1;
}

