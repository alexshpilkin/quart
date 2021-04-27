PRIM( ABORT, goto abort; , ; )
PRIM( HALT, goto halt; , ; )
PRIM( EXIT, iptr = rpop; , rget( 1 ); ; )
PRIM( EXECUTE, rpsh = iptr; iptr = dpop; , rput( 1 ); dget( 1 ); ; )
PRIM( FETCHRP, x = rptr; dpsh = x; , dput( 1 ); ; )
PRIM( FETCHRB, x = rbot; dpsh = x; , dput( 1 ); ; )
PRIM( FETCHRT, x = rtop; dpsh = x; , dput( 1 ); ; )
PRIM( STORERP, x = dpop; rptr = x; rchk; , dget( 1 ); ; )
PRIM( STORERB, x = dpop; rbot = x; rchk; , dget( 1 ); ; )
PRIM( STORERT, x = dpop; rtop = x; rchk; , dget( 1 ); ; )
PRIM( FETCHDP, x = dptr; dpsh = x; , dput( 1 ); ; )
PRIM( FETCHDB, x = dbot; dpsh = x; , dput( 1 ); ; )
PRIM( FETCHDT, x = dtop; dpsh = x; , dput( 1 ); ; )
PRIM( STOREDP, x = dpop; dptr = x; dchk; , dget( 1 ); ; )
PRIM( STOREDB, x = dpop; dbot = x; dchk; , dget( 1 ); ; )
PRIM( STOREDT, x = dpop; dtop = x; dchk; , dget( 1 ); ; )
PRIM( DROP, x = dpop; , dget( 1 ); ; )
PRIM( DUP, x = dpop; dpsh = x; dpsh = x; , dget( 1 ); dput( 1 ); ; )
PRIM( NIP, y = dpop; x = dpop; dpsh = y; , dget( 2 ); ; )
PRIM( SWAP, y = dpop; x = dpop; dpsh = y; dpsh = x; , dget( 2 ); ; )
PRIM( OVER, y = dpop; x = dpop; dpsh = x; dpsh = y; dpsh = x; , dget( 2 ); dput( 1 ); ; )
PRIM( TUCK, y = dpop; x = dpop; dpsh = y; dpsh = x; dpsh = y; , dget( 2 ); dput( 1 ); ; )
PRIM( ROT, z = dpop; y = dpop; x = dpop; dpsh = y; dpsh = z; dpsh = x; , dget( 3 ); ; )
PRIM( TOR, z = dpop; y = dpop; x = dpop; dpsh = z; dpsh = x; dpsh = y; , dget( 3 ); ; )
