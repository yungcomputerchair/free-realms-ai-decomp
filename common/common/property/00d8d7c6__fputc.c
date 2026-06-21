// addr: 0x00d8d7c6
// name: _fputc
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Setting prototype: int _fputc(int ch, void * stream) */

int __cdecl _fputc(int ch,void *stream)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint local_20;
  
                    /* CRT fputc implementation. It validates the FILE pointer/flags, locks the
                       stream, writes one byte or calls the slow path when the buffer is full, and
                       returns EOF on error. */
  local_20 = 0;
  if (stream == (void *)0x0) {
    puVar2 = (undefined4 *)FUN_00d8e452();
    *puVar2 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
    return -1;
  }
  CRT_lockFile((uint)stream);
  if ((*(byte *)((int)stream + 0xc) & 0x40) == 0) {
    iVar3 = __fileno(stream);
    if ((iVar3 == -1) || (iVar3 = __fileno(stream), iVar3 == -2)) {
      puVar5 = &DAT_01b84910;
    }
    else {
      iVar3 = __fileno(stream);
      uVar4 = __fileno(stream);
      puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_01cbefa0)[iVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) == 0) {
      iVar3 = __fileno(stream);
      if ((iVar3 == -1) || (iVar3 = __fileno(stream), iVar3 == -2)) {
        puVar5 = &DAT_01b84910;
      }
      else {
        iVar3 = __fileno(stream);
        uVar4 = __fileno(stream);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_01cbefa0)[iVar3 >> 5]);
      }
      if ((puVar5[0x24] & 0x80) == 0) goto LAB_00d8d8bf;
    }
    puVar2 = (undefined4 *)FUN_00d8e452();
    *puVar2 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
    local_20 = 0xffffffff;
  }
LAB_00d8d8bf:
  if (local_20 == 0) {
    piVar1 = (int *)((int)stream + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_20 = FUN_00d9f083(ch,stream);
    }
    else {
      **(undefined1 **)stream = (undefined1)ch;
      local_20 = ch & 0xff;
      *(int *)stream = *(int *)stream + 1;
    }
  }
  CRT_unlock_file_from_fputc();
  return local_20;
}

