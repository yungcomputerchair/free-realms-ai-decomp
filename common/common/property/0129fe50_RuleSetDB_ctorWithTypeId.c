// addr: 0x0129fe50
// name: RuleSetDB_ctorWithTypeId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetDB_ctorWithTypeId(int * this, int typeId) */

void __thiscall RuleSetDB_ctorWithTypeId(void *this,int typeId)

{
                    /* Initializes a RuleSetDB instance, defaulting the type id to 0x9f3 when the
                       caller passes -1, then delegates to the main RuleSetDB constructor body.
                       Evidence includes the RuleSetDB.cpp assert strings in callee FUN_0129f6d0. */
  if (typeId == -1) {
    *(undefined4 *)this = 0x9f3;
    RuleSetDB_loadIndex(this,0x9f3);
    return;
  }
  *(int *)this = typeId;
  RuleSetDB_loadIndex(this,typeId);
  return;
}

