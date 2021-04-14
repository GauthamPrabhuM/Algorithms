long long min_groups_fast(C[n]) {

  	R = set([]);
  	i = 1;

  	while(i<=n) {

  	    l = C[i];
  	    r = c[i] + 1;

  	    [l, r] = [C[i], C[i] + 1]

  	    R += l, r;
  	    i += 1;

  	    while(i<=n && C[i]<=r) {
  	        i+=1;
  	    }

  	}

