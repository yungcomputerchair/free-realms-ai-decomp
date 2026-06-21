// addr: 0x00da130a
// name: _fwrite
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Setting prototype: size_t _fwrite(void * buffer, size_t size, size_t count, void * stream) */

size_t __cdecl _fwrite(void *buffer,size_t size,size_t count,void *stream)

{
  undefined4 *puVar1;
  size_t sVar2;
  
                    /* CRT fwrite implementation. It validates size/count and stream, locks the
                       FILE, delegates to the bulk write helper, unlocks, and returns items written.
                        */
  if ((size != 0) && (count != 0)) {
    if (stream != (void *)0x0) {
      CRT_lockFile((uint)stream);
      sVar2 = FUN_00da11ab(buffer,size,count,stream);
      FUN_00da1382();
      return sVar2;
    }
    puVar1 = (undefined4 *)FUN_00d8e452();
    *puVar1 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
  }
  return 0;
}

