// addr: 0x00aaf6a0
// name: HousingFixtureRef_ctorWithGuid
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * HousingFixtureRef_ctorWithGuid(void * this, uint * guidPart) */

void * __thiscall HousingFixtureRef_ctorWithGuid(void *this,uint *guidPart)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a housing fixture/reference-like object by initializing an
                       embedded CharacterGuid array and storing the supplied guid/id part at offset
                       +0x24. Housing context is inferred from neighboring packet constructors. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c3ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aac080(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(uint *)((int)this + 0x24) = *guidPart;
  ExceptionList = local_c;
  return this;
}

