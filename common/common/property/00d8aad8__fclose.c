// addr: 0x00d8aad8
// name: _fclose
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2005 Release */

int __cdecl _fclose(FILE *_File)

{
  undefined4 *puVar1;
  int local_20;
  
                    /* Preserves the existing identified symbol _fclose; code initializes or
                       operates on that class and is queued for sidecar write-back. */
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_00d8e452();
    *puVar1 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    CRT_lockFile((uint)_File);
    local_20 = FUN_00d8aa66(_File);
    FUN_00d8ab4c();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}

