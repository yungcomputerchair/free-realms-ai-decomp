// addr: 0x012faaa0
// name: ValueData_getBooleanString
// subsystem: common/common/all
// source (binary assert): common/common/all/ValueData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ValueData_getBooleanString(void * this) */

char * __fastcall ValueData_getBooleanString(void *this)

{
  char *pcVar1;
  
                    /* Asserts the ValueData type id is the boolean type and returns the literal
                       "true" or "false" based on the byte payload at offset 8. */
  if (*(int *)((int)this + 4) != 1) {
    FUN_012f5a60("mTypeID == kBooleanTypeID","..\\common\\common\\all\\ValueData.cpp",0x3ec);
  }
  pcVar1 = "true";
  if (*(char *)((int)this + 8) == '\0') {
    pcVar1 = "false";
  }
  return pcVar1;
}

