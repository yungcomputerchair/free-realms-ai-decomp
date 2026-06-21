// addr: 0x00da3293
// name: CRT_alloc_or_reuse_file
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CRT_alloc_or_reuse_file(void) */

void * CRT_alloc_or_reuse_file(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
                    /* Finds an unused CRT FILE slot or allocates a new FILE structure, initializes
                       its critical section, locks it, resets fields, and returns it. Evidence is
                       callers from __fsopen/tmpfile helpers and the stdio table allocation shape.
                        */
  puVar6 = (undefined4 *)0x0;
  __lock(1);
  iVar5 = 0;
  do {
    puVar7 = puVar6;
    if (DAT_01cc00c0 <= iVar5) {
LAB_00da338f:
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[3] = puVar7[3] & 0x8000;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[7] = 0;
        puVar7[4] = 0xffffffff;
      }
      CRT_unlock_stdio_table_after_alloc();
      return puVar7;
    }
    piVar1 = (int *)(DAT_01cbf0b0 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_01cbf0b0) = pvVar4;
      if (*(int *)(DAT_01cbf0b0 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_01cbf0b0 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar5 + DAT_01cbf0b0));
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_01cbf0b0) + 0x20));
        puVar7 = *(undefined4 **)(iVar5 + DAT_01cbf0b0);
        puVar7[3] = 0;
      }
      goto LAB_00da338f;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && (-1 < (short)uVar2)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = FUN_00d936de(iVar5 + 0x10), iVar3 == 0))
      goto LAB_00da338f;
      FUN_00d8e389(iVar5,*(undefined4 *)(DAT_01cbf0b0 + iVar5 * 4));
      puVar7 = *(undefined4 **)(DAT_01cbf0b0 + iVar5 * 4);
      if ((*(byte *)(puVar7 + 3) & 0x83) == 0) goto LAB_00da338f;
      FUN_00d8e3ed(iVar5,puVar7);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

