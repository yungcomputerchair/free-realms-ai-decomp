// addr: 0x010cfa90
// name: FUN_010cfa90
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void insertThreeIntNodeIntoGlobalHash(int a_, int b_, int c_) */

void __cdecl insertThreeIntNodeIntoGlobalHash(int a_,int b_,int c_)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x1c-byte node containing three integer keys/values and inserts
                       it into a global hash table via the generic hash insert helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164b01b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = Mem_Alloc(0x1c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    *piVar1 = a_;
    piVar1[1] = b_;
    piVar1[2] = c_;
  }
  local_4 = 0xffffffff;
  FUN_008372d0((&DAT_01b34f8c)[*piVar1 * 4],piVar1);
  ExceptionList = local_c;
  return;
}

