// addr: 0x014315c0
// name: FormatSpecificData_setVersion
// subsystem: common/common/property
// source (binary assert): common/common/property/FormatSpecificData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FormatSpecificData_setVersion(void * this, int version) */

void __thiscall FormatSpecificData_setVersion(void *this,int version)

{
                    /* Sets the FormatSpecificData version field at offset 0x0c after rejecting -1.
                       Evidence is the FormatSpecificData.cpp assertion string `v != -1` and the
                       direct store of the parameter. */
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\FormatSpecificData.cpp",0x33);
  }
  *(int *)((int)this + 0xc) = version;
  return;
}

