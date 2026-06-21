// addr: 0x00819650
// name: FUN_00819650
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_00819650(void * this, int id_, void ** outObject) */

bool __thiscall FUN_00819650(void *this,int id_,void **outObject)

{
  int *piVar1;
  
                    /* Looks up an object by 32-bit id in a 1024-bucket hash table at this+0x1244
                       and returns it through an out parameter if present. Class identity is not
                       known. */
  piVar1 = *(int **)((int)this + (id_ & 0x3ffU) * 4 + 0x1244);
  do {
    if (piVar1 == (int *)0x0) {
LAB_00819672:
      *outObject = (void *)0x0;
      return false;
    }
    if (piVar1[2] == id_) {
      if ((void *)*piVar1 != (void *)0x0) {
        *outObject = (void *)*piVar1;
        return true;
      }
      goto LAB_00819672;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

