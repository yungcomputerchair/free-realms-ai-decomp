// addr: 0x007732b0
// name: FUN_007732b0
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_007732b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  *(undefined4 *)(param_1 + 0x18) = DAT_01762a34;
  piVar1 = *(int **)(param_1 + 8);
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[7];
    if ((((int *)*piVar2 != (int *)0x0) &&
        (cVar4 = (**(code **)(*(int *)*piVar2 + 4))(), cVar4 == '\0')) &&
       (piVar2 = (int *)*piVar2, -1 < (short)piVar2[3])) {
      pcVar3 = *(code **)(*piVar2 + 0x18);
      *(ushort *)(piVar2 + 3) = *(ushort *)(piVar2 + 3) & 0x8000;
      (*pcVar3)();
    }
  }
  return;
}

