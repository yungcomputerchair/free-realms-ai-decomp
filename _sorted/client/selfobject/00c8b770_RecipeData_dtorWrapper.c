// addr: 0x00c8b770
// name: RecipeData_dtorWrapper
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void RecipeData_dtorWrapper(void) */

void RecipeData_dtorWrapper(void)

{
  void *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that invokes RecipeData_dtor on an allocator/security-cookie
                       adjusted object pointer. Contains no additional recipe logic. */
  puStack_8 = &LAB_01605dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  RecipeData_dtor(in_ECX);
  ExceptionList = local_c;
  return;
}

