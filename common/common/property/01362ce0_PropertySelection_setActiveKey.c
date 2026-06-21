// addr: 0x01362ce0
// name: PropertySelection_setActiveKey
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySelection_setActiveKey(void * this, int key) */

void __fastcall PropertySelection_setActiveKey(void *this,int key)

{
  int key_00;
  
                    /* Clears active flags for the current property selection and then marks the
                       supplied key active. The two callees traverse the container at this+0x258 and
                       update boolean bytes in map entries. */
  PropertySelection_clearMarkedKeys(this);
  PropertySelection_markActiveKeyActive(this,key_00);
  return;
}

