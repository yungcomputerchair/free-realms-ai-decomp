// addr: 0x01379580
// name: Archetype_setFormatSpecificData
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_setFormatSpecificData(void * this, void * formatData) */

void __thiscall Archetype_setFormatSpecificData(void *this,void *formatData)

{
                    /* Sets the Archetype format-specific data pointer at offset 0x10. The dump
                       routine labels this field 'Format specific data', and this setter asserts
                       false if a defining archetype id is already present. */
  if (*(int *)((int)this + 0x18) != 0) {
    FUN_012f5a60("false","..\\common\\common\\property\\Archetype.cpp",0x115);
    *(void **)((int)this + 0x10) = formatData;
    return;
  }
  *(void **)((int)this + 0x10) = formatData;
  return;
}

