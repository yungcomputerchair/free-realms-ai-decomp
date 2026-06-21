// addr: 0x012c39f0
// name: Vector16Owner_copyConstruct
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall Vector16Owner_copyConstruct(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a structure containing a leading scalar followed by a
                       16-byte-element vector member. It copies the first dword and delegates vector
                       copy construction for the following member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e6ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  FUN_012c3680(param_2 + 1);
  ExceptionList = local_c;
  return param_1;
}

