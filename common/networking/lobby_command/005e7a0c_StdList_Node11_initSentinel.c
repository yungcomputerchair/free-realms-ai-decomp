// addr: 0x005e7a0c
// name: StdList_Node11_initSentinel
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdList_Node11_initSentinel(void * param_1) */

void __fastcall StdList_Node11_initSentinel(void *param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* Allocates and initializes a list/tree-style sentinel node, points
                       next/prev/self links at itself, marks byte +0x11, and zeroes the container
                       count. Evidence: small constructor wrappers at 005e8ccf and 005f6eb7 call
                       only this helper. */
  iVar2 = FUN_005e58dc();
  piVar1 = (int *)((int)param_1 + 4);
  *piVar1 = iVar2;
  *(undefined1 *)(iVar2 + 0x11) = 1;
  *(int *)(*piVar1 + 4) = *piVar1;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  *(undefined4 *)((int)param_1 + 8) = 0;
  return;
}

