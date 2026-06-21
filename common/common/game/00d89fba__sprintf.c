// addr: 0x00d89fba
// name: _sprintf
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int _sprintf(char * dest, char * format, undefined4) */

int __cdecl _sprintf(char *dest,char *format,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  undefined4 local_18;
  
                    /* Visual Studio CRT sprintf implementation; validates null arguments, formats
                       through the shared printf engine, and NUL-terminates the destination. */
  if ((format == (char *)0x0) || (dest == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_00d8e452();
    *puVar1 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    local_1c = dest;
    local_24 = dest;
    local_20 = 0x7fffffff;
    local_18 = 0x42;
    iVar2 = FUN_00d945aa(&local_24,format,0,&param_3);
    local_20 = local_20 + -1;
    if (local_20 < 0) {
      FUN_00d9f083(0,&local_24);
    }
    else {
      *local_24 = '\0';
    }
  }
  return iVar2;
}

