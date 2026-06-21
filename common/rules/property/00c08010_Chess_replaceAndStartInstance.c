// addr: 0x00c08010
// name: Chess_replaceAndStartInstance
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Chess_replaceAndStartInstance(void * slot, int startArg_) */

void __thiscall Chess_replaceAndStartInstance(void *this,void *slot,int startArg_)

{
  Chess *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deletes any existing Chess instance in the slot, allocates a new Chess
                       object, constructs it, and calls Chess::start with the supplied argument.
                       Evidence is the known Chess constructor/start symbols and destructor/free
                       sequence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f413b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = *(Chess **)this;
  if (pCVar1 != (Chess *)0x0) {
    Chess::Chess_dtor(pCVar1);
                    /* WARNING: Subroutine does not return */
    _free(pCVar1);
  }
  pCVar1 = Mem_Alloc(0x1290);
  local_4 = 0;
  if (pCVar1 == (Chess *)0x0) {
    pCVar1 = (Chess *)0x0;
  }
  else {
    pCVar1 = (Chess *)Chess::Chess(pCVar1,(char *)0x0);
  }
  local_4 = 0xffffffff;
  *(Chess **)this = pCVar1;
  if (pCVar1 != (Chess *)0x0) {
    Chess::Chess_start(pCVar1,(int)slot);
  }
  ExceptionList = local_c;
  return;
}

